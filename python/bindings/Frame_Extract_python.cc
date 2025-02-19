/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(Frame_Extract.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(a46ea14cfb7dfd35fa286ef6ced7cc6f)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <HighDataRate_Modem/Frame_Extract.h>
// pydoc.h is automatically generated in the build directory
#include <Frame_Extract_pydoc.h>

void bind_Frame_Extract(py::module& m)
{

    using Frame_Extract    = gr::HighDataRate_Modem::Frame_Extract;


    py::class_<Frame_Extract, gr::block, gr::basic_block,
        std::shared_ptr<Frame_Extract>>(m, "Frame_Extract", D(Frame_Extract))

        .def(py::init(&Frame_Extract::make),
           D(Frame_Extract,make)
        )
        



        ;




}








