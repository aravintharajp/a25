void main()
{
long int n,t,a[10000],i,j;
scanf("%ld",&n);
if(n<1||n>1000)
{
printf("Invalid");
exit(1);
}
for(i=0;i<n;i++)
scanf("%ld",&a[i]);
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
 if(a[i]<a[j])
 {
  t=a[j];
  a[j]=a[i];
  a[i]=t;
 }
 }
}
n=n/2;
printf("%ld",a[n]);
}
