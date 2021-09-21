package org.shapes;

public class Square{
	public double side;
	public Square(double side){
		this.side=side;
	}

	public double getArea(){
		return side *side;
	}
}