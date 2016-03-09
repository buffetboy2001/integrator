//
// Created by Stuart on 3/5/2016.
//

#include "../include/integrator.h"
#include <logger.h>
#include <consoleappender.h>
#include <loglevel.h>
#include <loggingmacros.h>

using namespace integrator;

Trapezoidal::Trapezoidal() {
//    SharedAppenderPtr myAppender(new ConsoleAppender());
//    myAppender->setName("myAppenderName");
//    std::auto_ptr<Layout> myLayout = std::auto_ptr<Layout>(new log4cplus::TTCCLayout());
//    myAppender->setLayout( myLayout );
//    initialize(); // start logging system
//    Logger logger = Logger::getInstance("Trapezoidal");
//    applogger.addAppender(myAppender);
}

double Trapezoidal::integrate(const int stepSize, const double *xdata, const double *ydata) {
    /*
     * Hey Look! There isn't anything actually here! See the project's README to understand why.
     */
    return 0;
}
