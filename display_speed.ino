byte a[10][4]={
   {0,0,0,0}
,  {0,0,0,1}
,  {0,0,1,0}
,  {0,0,1,1}
,  {0,1,0,0}
,  {0,1,0,1}
,  {0,1,1,0}
,  {0,1,1,1}
,  {1,0,0,0}
,  {1,0,0,1}};
int cmap(char zx)
{
  if(zx=='0') return(0);
  if(zx=='1') return(1);
  if(zx=='2') return(2);
  if(zx=='3') return(3);
  if(zx=='4') return(4);
  if(zx=='5') return(5);
  if(zx=='6') return(6);
  if(zx=='7') return(7);
  if(zx=='8') return(8);
  if(zx=='9') return(9);
  
}
void dd(int x)
{
  digitalWrite(q,a[x][3]);
  digitalWrite(w,a[x][2]);
  digitalWrite(e,a[x][1]);
  digitalWrite(r,a[x][0]);

}
void ds(int y,int x)
{
    digitalWrite(12,1);
    digitalWrite(13,0);
    sped=x*10+y;
   
    digitalWrite(t,0);
    dd(x);
    delay(4);
    digitalWrite(t,1);
    dd(y);
    delay(4);
 
    digitalWrite(12,0);
    delay(sped/5);
}
