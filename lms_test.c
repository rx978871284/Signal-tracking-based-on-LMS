#include <stdio.h>
#include <math.h> 
#include "lms.h"
void lms_track (
  data_length *y,
  data_length x,
  data_length iter
  );


int main () {
  FILE   *fp;
  data_length signal, output;
  const data_length x_in[N+1]={
  #include "x_in_wnsin.dat"
     };

  fp=fopen("C:\\xup\\hls\\labs\\lms_lab\\lms_output.dat","w");
  int i;
  for (i=0;i<SAMPLES;i++)
  {
	  if(i==0)
	  signal = x_in[0];
	  else
	  signal = x_in[i];
	  lms_track(&output,signal,i);
   	  //printf("%i %d %d\n",i,(int)signal,(int)output);
   	  printf("%d\n",(int)output);
  	  fprintf(fp,"%d\n",output);
  }
  fclose(fp);
  return 0;
}
