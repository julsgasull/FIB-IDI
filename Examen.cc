/*------------------------------------------------------------------------------
                                EXÀMEN LAB
------------------------------------------------------------------------------*/


/*----------------------------- Material útil --------------------------------*/
/*

-- INSTRUCCIONS
    - Crear Makefile: qmake-qt5
    - Designer: designer-qt5

-- ANGLES
    - 0         -->     0º
    - M_PI/2    -->     90º
    - M_PI      -->     180º
    - 3*M_PI/4  -->     270º

-- ANGLES EULER (amb ordre de transform)
    - phi       -->     Z   -->     View = glm::rotate(View, -phi, glm::vec3(0.0, 0.0, 1.0));
    - theta     -->     X   -->     View = glm::rotate(View, theta, glm::vec3(1.0, 0.0, 0.0));
    - psi       -->     Y   -->     View = glm::rotate(View, -psi, glm::vec3(0.0, 1.0, 0.0));

*/



/*--------------------------------- Codi -------------------------------------*/

// Resize
void MyGLWidget::resizeGL (int w, int h)
{
    // rav (ra viewport), ra (ra window)
    rav = float(w)/float(h);

    if (perspective)
    {
        // si (rav < 1) --> FOV = 2*alfa, on alfa = arctg(tg(alfa_ini)/rav)
        if (rav < 1.0)
        {
            float alfa = atan(tan(alfa_ini)/rav);
            FOV = 2.0*alfa;
        }
        else FOV = alfa_ini*2.0;
    }

    else //ortogonal
    {
        // si (rav > 1) --> canviar valors left/right
        if (rav > 1.0)
        {
            left = -radi*rav;
            right = radi*rav;
        }
        // si (rav <= 1) --> canviar valors bottom/top
        else
        {
            bottom = -radi/rav;
            top = radi/rav;
        }
    }

    projectTransform();
}

// Angles Euler
void MyGLWidget::viewTransform()
{
    // Matriu de posició i orientació
    glm::mat4 View(1.0f);

    // viewTransform amb angles Euler
    View = glm::translate(View, glm::vec3(0.0, 0.0, -d));
    View = glm::rotate(View, -phi, glm::vec3(0.0, 0.0, 1.0));
    View = glm::rotate(View, theta, glm::vec3(1.0, 0.0, 0.0));
    View = glm::rotate(View, -psi, glm::vec3(0.0, 1.0, 0.0));
    View = glm::translate(View, -VRP);
    glUniformMatrix4fv(viewLoc, 1, GL_FALSE, &View[0][0]);
}

// Càmera 3a persona
void MyGLWidget::ini_camera_3a_persona()
{
    // centreEscena = (Pmin + Pmax)/2
    centreEscena = glm::vec3((Pmin[0]+Pmax[0])/2.0, (Pmin[1]+Pmax[1])/2.0, (Pmin[2]+Pmax[2])/2.0);

    // radi = dist (Pmax, VRP) = dist (Pmin, VRP) = (Pmin - Pmax)/2 -->
    //  utlitizem la última opció ja que a VRP encara no li hem assignat el centreEscena
    radi = sqrt(	((Pmax[0]-Pmin[0])/2.0)*((Pmax[0]-Pmin[0])/2.0) +
                    ((Pmax[1]-Pmin[1])/2.0)*((Pmax[1]-Pmin[1])/2.0) +
                    ((Pmax[2]-Pmin[2])/2.0)*((Pmax[2]-Pmin[2])/2.0) );

    // distancia d (d > r)
    d = 2*radi;

    // viewTransform inicialize values
    VRP = centreEscena;                                         // VRP = centreEscena = (Pmin + Pmax)/2
    OBS = VRP + d*glm::vec3(0/sqrt(1),0/sqrt(1),1/sqrt(1));     // OBS = VRP + d*v;
    UP = glm::vec3(0,1,0);

    viewTransform();

    // projectTransform inicialize values
    alfa_ini = asin(radi/d);
    FOV = 2*alfa_ini;
    znear = d - radi;
    zfar = d + radi;

    // projectTransform(); --> cridat al resizeGL(w, h)
}
