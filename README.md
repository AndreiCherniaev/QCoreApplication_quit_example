# QCoreApplication_quit_example
 simpe example How to exit after QCoreApplication::exec()
 
 Run app and after 3 second QCoreApplication_quit_example will close automatically with message "good bye".
 
 To exit from you infinite cycle QCoreApplication::exec()
 try this
 
    QTimer::singleShot(1000, this, &rial::closeApp); //if you need process some code in closeApp()
 or this
 
    QTimer::singleShot(1000, QCoreApplication::instance(), SLOT(quit())); //if you need quit() only

Also you can use Ctrl+C to exit. If user send Ctrl+C signal QCoreApplication_quit_example will use non-Qt function SigInt_Handler(). It tested on Ubuntu.

# QCoreApplication_quit_SIGINT_example
QCoreApplication_quit_SIGINT_example is more powerfull then QCoreApplication_quit_example. If user send Ctrl+C signal QCoreApplication_quit_SIGINT_example will use Qt non-static method rial::handleSignal(). In this method Qt start QTimer for 3 seconds and after do closeApp(). If user don't press Ctrl+C in console for QCoreApplication_quit_SIGINT_example this app will wating forever.
