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

# How run?
You can run this apps using Qt Creator. You can use external terminal if you need use this way
<p align="center">
  <img alt="Qt Creator. Run proj in external terminal" src="https://github.com/AndreiCherniaev/QCoreApplication_quit_example/blob/38b9c07d8a77a3e9122f64366c1c3d31b9c12061/Qt%20Creator.%20Run%20proj%20in%20external%20terminal.png?raw=true" width="800">
  <br>
    <em>Run proj in external terminal</em>
</p>

You can send SIGINT by Ctr+C key. But also you can send SIGINT using Debug mode via GDB console. Before sending "signal 2" don't forget make Pause!
<p align="center">
  <img alt="Qt Creator. Debug using gdb creator. Emit signal 2 via gdb console" src="https://github.com/AndreiCherniaev/QCoreApplication_quit_example/blob/38b9c07d8a77a3e9122f64366c1c3d31b9c12061/Qt%20Creator.%20GDB.%20signal%202.png?raw=true" width="800">
  <br>
    <em>	SIGINT by GDB in Qt Creator</em>
</p>
