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
