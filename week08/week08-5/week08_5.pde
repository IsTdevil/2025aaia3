void setup(){
  size(400, 500);
}
int x =200, y = 250;
float m = 0, dm=0.03;
void draw(){
  background(0);
  fill(255, 255, 0);
  //ellipse(x, y, 30, 30, 0, 1);
  arc(x, y, 30, 30, m, PI*2-m);
  m += dm;
  if(m>1 || m<0) dm = -dm;
}
