# Signal-tracking-based-on-LMS
This project intends to use high-level synthesis design method, relying on Xilinx PYNQ-Z2 or Kintex-7 series xc7k325tffg900 to complete the target signal tracking based on LMS algorithm.
## Background
The least mean square (LMS) algorithm is an improved algorithm of the steepest descent algorithm which has good convergence in the environment of stationary signal, and it is the most stable and widely used algorithm in the adaptive algorithm. This project will use HLS to design LMS algorithm to complete the adaptive updating of FIR filter coefficients, so that the output signal can track the target signal, which has a very broad application scenarios.
## Hardware
Option 1: PYNQ-Z2.  
Option 2: Kintex-7 series xc7k325tffg900.  
![image](https://github.com/rx978871284/Signal-tracking-based-on-LMS/blob/main/image/7k325t.png)

## Labs Overview
Lab1: The single frequency wave is used as the input signal, and the single frequency wave with different phase and amplitude is used as the expected signal. Make the filter output signal track the desired signal,  and continuously improve the performance to speed up the convergence speed and reduce the steady-state error.  
Lab2: Convert single frequency wave to white noise of different frequency band and verify performance.
## Expected results
The HLS method is used to successfully design an adaptive FIR filter based on the LMS algorithm, which has a good tracking performance on single frequency waves of different frequencies and white noise of different frequency bands, with fast convergence speed and small errors.
### Explain
My research direction is digital signal processing and its application in active noise control, the previous development is mainly based on Verilog. I hope that after the study of this winter camp and the design of this project, I can master the HLS method and successfully apply it in my future project development to greatly improve performance. Finally, thank you all teachers for your hard work during the winter camp.

# Experimental result
The 1000Hz sine wave and 60-4000Hz Gaussian white noise signals are tracked respectively. The experimental results are as follows.
##  1000Hz sine wave signal
The input signal is the opposite of the desired output signal.

<img src="https://github.com/rx978871284/Signal-tracking-based-on-LMS/blob/main/image/1000Hz_Sin.png" width="600" height="500" >

##  60-4000Hz Gaussian white noise signal
The input signal is also the opposite of the desired output signal.

<img src="https://github.com/rx978871284/Signal-tracking-based-on-LMS/blob/main/image/60_4kHz_noise.png" width="600" height="500" >

# Summary
In order to further improve the performance of LMS, I optimized the basic algorithm, introduced a variable step size factor in LMS, and adaptively updated the step size according to the size of error in each iteration, so as to further improve the convergence performance. See *variable_step_LMS.zip* for specific projects.

# 致谢
感谢本次冬令营的各位老师的辛苦指导和各位同学的帮助，通过本次冬令营，我从对HLS完全不了解，到对这个工具有了初步的认识和理解。在实验练习和项目设计阶段，通过不断地学习和练习，对HLS有了更加深刻的认知，并一直努力将HLS运用到我的科研任务中，我相信必将会对我的开发过程有着巨大的帮助。再次感谢各位老师和同学！

