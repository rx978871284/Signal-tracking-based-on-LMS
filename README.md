# Signal-tracking-based-on-LMS
This project intends to use high-level synthesis design method, relying on Xilinx PYNQ-Z2 or Kintex-7 series xc7k325tffg900 to complete the target signal tracking based on LMS algorithm.
## Background
The least mean square (LMS) algorithm is an improved algorithm of the steepest descent algorithm which has good convergence in the environment of stationary signal, and it is the most stable and widely used algorithm in the adaptive algorithm. This project will use HLS to design LMS algorithm to complete the adaptive updating of FIR filter coefficients, so that the output signal can track the target signal, which has a very broad application scenarios.
## Hardware
Option 1: PYNQ-Z2.  
Option 2: Kintex-7 series xc7k325tffg900.  

![Image text](https://github.com/rx978871284/Signal-tracking-based-on-LMS/blob/main/image/7k325t.png)
