public class week5_2{
	public static void main(String args[]){
		circle obj = new circle(5);
		System.out.println("Area of circle "+obj.circleArea());
		System.out.println("Perimeter of circle "+obj.circlePerimeter());
	}
}

class circle{
	double r;

	circle(double r){
		this.r=r;
	}
	void circleArea(){
		return Math.PI*this.r*this.r;
	}
	void circlePerimeter(){
		return 2* Math.PI *this.r;
	}
}