
//roate queue
int queue[20];
int de=0,en=-1;
void inqueue(int v){
    en=++en%10;
    queue[en]=v;
}
int dequeue(){
    if(en==-1) return -1;
    de=de++%10;
    if(de==en){
        de=0;
        en=-1;
    }
    return queue[de];
}
