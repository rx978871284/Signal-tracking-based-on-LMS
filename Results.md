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

