//bitmemo

if(bit & (1<<i)){}が上手くいかないときの対処法
	ビットbitにi番目のフラグが立っているかどうか

//1.bitのあるなしのみ判断できればよい場合
int tmp = (int)pow(2,i);
tmp &= bit;
if(tmp>0){}

//2.0,1でbitの比較を行う場合
int tmp = bit & (int)pow(2,i);
if(tmp!=0) tmp=1;
if(tmp==1){}



//bit全探索
bool exist =false;
for(int msk=0;msk<(1<<n);msk++){
	//ビットmskに対する処理
	int sum=0;
	for(int i=0;i<n;i++){
		if(msk & (1<<i))sum+=a[i];
		}
	//判定
	if(sum==w)exist=true;
}
if(exist)cout<<"Yes"<<endl;
else cout<<"No"<<endl;