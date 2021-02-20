#include "lms.h" 

void lms_track (
		data_length *y,
		data_length x,
		data_length iter
  ) {

 const data_length desired[N+1]={
#include "desired_sin.dat"
};

 coe_length coe[Order+1];
int j;
loop1:
for (j=0;j<N+1;j++)
{
if (iter==0)
coe[j]=0;
}

static data_length data_reg[Order];
data_out out;
data_out en;
int i;
int k;

out=(data_out)data_reg[Order-1]*(data_out)coe[Order];
loop2: for (i=N-1;i!=0;i--)
{
out+=(data_out)data_reg[i-1]*(data_out)coe[i];
data_reg[i]=data_reg[i-1];
}

out+=(data_out)x*(data_out)coe[0];
data_reg[0]=x;
*y = out>>15;

//en=desired[iter]-*y;
 en=-x-*y;
en=en>>10;
loop3:
for (k=0;k<Order+1;k++)
{
coe[k]=coe[k]+0.005*en*data_reg[k];

}

}



