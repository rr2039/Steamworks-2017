/*
 * RunCV.cpp
 * A component of the Rockford Robotics Vision Processing System, 2017 version.
 * Copyright (c) 2017 Rockford Robotics.  All rights reserved.
 * THIS IMPLEMENTATION NOT YET RELEASED.
 */

// Generic include statements.
#include <iostream>  // We'll use this for debugging purposes only, probably.
#include <string>  // Using strings for communicating status and stuff over NetworkTables.
#include <thread>  // Multithreading makes things more efficient.
#include <vector>  // Vector functionality is required for OpenCV, and for my sanity.
#include <map>  //TODO GRIP wants this to be here, but I haven't found why.  We might not need it.
#include <math.h> // We undoubtedly need to do math somewhere.

// Includes for OpenCV functionality.
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d.hpp>




