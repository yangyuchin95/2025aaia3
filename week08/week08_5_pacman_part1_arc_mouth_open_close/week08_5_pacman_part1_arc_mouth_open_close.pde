//week08_5_pacman_part1_arc_mouth_open_close
void setup(){
  size(400, 500);
}
int x=200, y=250; //座標
float m = 0, dm=0.02; //嘴巴大小 vs.改變量
void draw(){
  background(0);
  fill(255, 255, 0); //黃色的
  arc(x,y,30,30,m,PI*2-m); //小精靈
  m += dm;
  if(m>1 || m<0) dm = -dm;
}
