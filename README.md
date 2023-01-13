# QCoreApplication_quit_example
 simpe example How to exit after QCoreApplication::exec()
 
 Run app and after 1 second app will close automatically with message "good bye".
 
 To exit from you infinite cycle QCoreApplication::exec()
 try this
    QTimer::singleShot(1000, this, &rial::closeApp); //if you need process some code in closeApp()
 or this
    QTimer::singleShot(1000, QCoreApplication::instance(), SLOT(quit())); //if you need quit() only
