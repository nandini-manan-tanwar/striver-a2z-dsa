/*
time complexity represented by big-Oh --> O()
TC= rate at which time takern wrt the input size
3 rules of TC 
1.calculate in worst case scenario
2.avoid constants
3.avoid lower values 
eg: 
for(i=0;i<N;i++)
{
    for(j=0;j<N;j++)
    {
          (any line of code )

     }
}

when i=0,{j=0} runs=1
     i=1,{j=0,1} runs=2
     i=2,{j=0,1,2....} runs=3
     .
     .
     .
     i=N-1,{j=0,1,2,....,N-1}runs= N

thus,
run time for inner 
1+2+3+4....+N---->(n(n+1))/2
*/

/*
space complexity generally refers to the memory space that a code uses while being executed.
1. depends on machine 
2. uses Big-Oh notation 
space complaxity=auxiliary space+input space.
Auxiliary space refers to the space that we use additionally to solve a problem 
 input space refers to the space that we use to store the inputs.
Most of these servers execute roughly 10^8 operations in approximately 1 second i.e. 1s. 
 if the time limit is given as 2s the operations in our code must be roughly 2*10^8, not 10^16. 
 Similarly, 5s refers to 5*10^8.
*/