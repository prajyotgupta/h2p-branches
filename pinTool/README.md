# PinTool 
Below are the steps captured to run the Pin instrumentation for your application.

## README Description
Author       : Prajyot Gupta
Department   : UW Stacs Lab, Department of ECE, UW Madison
Coursework   : Research under Prof. Joshua San Miguel
Description  : Intel Pin-tool README

## Steps to run
Step-1: Run the `setup_praj.sh` file to setup the ENV variables.

Step-2: For a sample list of Pin instruments, go to source/tools/Manualexamples 

Step-3: Run make on any instrument `make <ins_name>.test`; this creates the *.so file 
        of that object in the `obj-ia32` directory

Step-4: Run the instrumentation using
        `pinTool -t <obj dir>/*.so -- ./<executable>`
