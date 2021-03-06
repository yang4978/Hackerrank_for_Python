#https://www.hackerrank.com/challenges/append-and-delete/problem

 #!/bin/python3

import math
import os
import random
import re
import sys

# Complete the appendAndDelete function below.
def appendAndDelete(s, t, k):
    i=0;
    while(i<min(len(s),len(t))):
        if(s[i]!=t[i]):
            break;
        i+=1;

    if ((k-(len(s)+len(t)-2*(i)))==0):
        return 'Yes';
    elif ((k-(len(s)+len(t)-2*(i)))>0):
        if((k-(len(s)+len(t)-2*(i)))%2==0):
            return 'Yes'; 
        elif(k>=(len(s)+len(t))):
            return 'Yes';   
        else:
            return 'No';       
    else:
        return 'No';

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    t = input()

    k = int(input())

    result = appendAndDelete(s, t, k)

    fptr.write(result + '\n')

    fptr.close()
