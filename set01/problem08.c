int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int input_array_size(){
int n;
printf(“enter the size of the array”);
scanf(“%d”,&n);
return n;


}
void input_array(int n , int a[n]){
printf(“enter the elements ”);
for(int i=o;i<n;i++){
scanf(“%d”,&a[i]);
}
}
int sum_n_array(int n , int a ){
int sum=0;
for (int i=o;i<n;i++){
sum+=a[i];
}
Void output(int sum){
print f(“the sum of the array is %d”,sum);
}




}


int main(){
int n,a[n],sum;
n=input_array_size();
input_array(n,a);
sum=sum_n_array(n,a);
output(sum);
return 0;

}