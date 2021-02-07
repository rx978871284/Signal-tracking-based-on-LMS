# Signal-tracking-based-on-LMS
This project intends to use high-level synthesis design method, relying on Xilinx PYNQ-Z2 or Kintex-7 series xc7k325tffg900 to complete the target signal tracking based on LMS algorithm.
## Background
The least mean square (LMS) algorithm is an improved algorithm of the steepest descent algorithm which has good convergence in the environment of stationary signal, and it is the most stable and widely used algorithm in the adaptive algorithm. This project will use HLS to design LMS algorithm to complete the adaptive updating of FIR filter coefficients, so that the output signal can track the target signal, which has a very broad application scenarios.
## Hardware
Option 1: PYNQ-Z2.  
Option 2: Kintex-7 series xc7k325tffg900.  
## Labs Overview
Lab1: The single frequency wave is used as the input signal, and the single frequency wave with different phase and amplitude is used as the expected signal. Make the filter output signal track the desired signal,  and continuously improve the performance to speed up the convergence speed and reduce the steady-state error.  
Lab2: Convert single frequency wave to white noise of different frequency band and verify performance.
## Expected results
The HLS method is used to successfully design an adaptive FIR filter based on the LMS algorithm, which has a good tracking performance on single frequency waves of different frequencies and white noise of different frequency bands, with fast convergence speed and small errors.
### Explain
My research direction is digital signal processing and its application in active noise control, the previous development is mainly based on Verilog. I hope that after the study of this winter camp and the design of this project, I can master the HLS method and successfully apply it in my future project development to greatly improve performance. Finally, thank you all teachers for your hard work during the winter camp.
