package org.shapes;

public class Triangle{
	public double base,height;
	public Triangle(double base,double height){
		this.base=base;
		this.height=height;
	}

	public double getArea(){
		return (1/2)*base*height;
	}
}