int sum(int x,int y)
{
    int t = x + y;
    return t;
}

void swap(int *xp,int *yp)
{
    int t0 = *xp;
    int t1 = *yp;
    *xp = t1;
    *yp = t0;
}

int arith(int x,int y,int z){
    int t1 = x+y;
    int t2 = z+t1;
    int t3 = x+4;
    int t4= y * 48;
    int t5 = t3 + t4;
    int rval = t2 * t5;
    return rval;
}

int gt(int x,int y){
    return x>y;
}

int absdiff(int x,int y){
    int result;
    if(x>y){
        result = x - y;
    }else{
        result = y - x;
    }
    return result;
}

int cread(int *xp)
{
    return (xp? *xp:0);
}

/*循环汇编代码 */
int fact_do(int x){
    int result = 1;
    do {
        result *= x;
        x = x - 1;
    } while( x > 1);
    return result;
}

/*switch */
long switch_eg(long x,long y,long z)
{
    long w = 1;
    switch (x)
    {
    case 1:
        w = y * z;
        break;
    case 2:
        w = y/z;
    case 3:
        w += z;
        break;
    case 5:
    case 6:
        w -= z;
        break;
    default:
        w = 2;
    }
    return w;
}