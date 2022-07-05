int power(int x, int y)
{
    int result = 1;
    while (y > 0) {
      if(y&1==1) // y is odd
      {
        result=result*x;
      }
      x=x*x;
      y=y>>1; // y=y/2;
    }
    return result;
}
