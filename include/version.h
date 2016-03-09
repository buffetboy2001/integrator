// Copied from log4cplus project

// -*- C++ -*-
//  Copyright (C) 2010-2015, Vaclav Haisman. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without modifica-
//  tion, are permitted provided that the following conditions are met:
//
//  1. Redistributions of  source code must  retain the above copyright  notice,
//     this list of conditions and the following disclaimer.
//
//  2. Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//  THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED WARRANTIES,
//  INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
//  FITNESS  FOR A PARTICULAR  PURPOSE ARE  DISCLAIMED.  IN NO  EVENT SHALL  THE
//  APACHE SOFTWARE  FOUNDATION  OR ITS CONTRIBUTORS  BE LIABLE FOR  ANY DIRECT,
//  INDIRECT, INCIDENTAL, SPECIAL,  EXEMPLARY, OR CONSEQUENTIAL  DAMAGES (INCLU-
//  DING, BUT NOT LIMITED TO, PROCUREMENT  OF SUBSTITUTE GOODS OR SERVICES; LOSS
//  OF USE, DATA, OR  PROFITS; OR BUSINESS  INTERRUPTION)  HOWEVER CAUSED AND ON
//  ANY  THEORY OF LIABILITY,  WHETHER  IN CONTRACT,  STRICT LIABILITY,  OR TORT
//  (INCLUDING  NEGLIGENCE OR  OTHERWISE) ARISING IN  ANY WAY OUT OF THE  USE OF
//  THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


#if ! defined (INTEGRATOR_VERSION_H)
#define INTEGRATOR_VERSION_H

#if defined (INTEGRATOR_HAVE_PRAGMA_ONCE)
#pragma once
#endif

//#define INTEGRATOR_MAKE_VERSION(major, minor, point) \
//    (major * 1000 * 1000u + minor * 1000u + point)

#define INTEGRATOR_MAKE_VERSION_STR(major, minor, point, suffix) \
    #major "." #minor "." #point "-" #suffix

//! This is integrator version number as unsigned integer.  This must
//! be kept on a single line. It is used by Autotool and CMake build
//! systems to parse version number.
// #define INTEGRATOR_VERSION INTEGRATOR_MAKE_VERSION(1, 2, 0)

//! This is integrator version number as a string.
//! Do not wrap the suffix in quotes
#define INTEGRATOR_VERSION_STR INTEGRATOR_MAKE_VERSION_STR(1, 2, 0, SNAPSHOT)


#endif

