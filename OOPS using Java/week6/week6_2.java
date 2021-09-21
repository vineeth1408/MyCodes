/*Write a Java program which can give example of Method overloading and overriding */
import java.util.*;

class Animal {
	public static void speak() {
		System.out.println("Communicate in Animal language!");
	}

	public static  void animal(String name) {
		System.out.println("It is "+name);
	}
	
	public static void animal(String... names) {
		System.out.println("More than one animal present!");
		System.out.print("They are ");
		for (String name : names) {
			System.out.print(name+" ");
		}
	}
}

class Dog extends Animal {
	public static void speak() {
		System.out.println("Bow Bow!");
	}
}

class Cat extends Animal {
	public static void speak() {
		System.out.println("Meow Meow!");
	}
}

class week6_2 {
	public static void main(String[] args) {
		Animal animal = new Animal();
		// animal1.Animal("dog","pig");
		Dog dog1 = new Dog();
		Cat cat1 = new Cat();
		animal.speak();
		Animal.speak();
		Dog.speak();
		Cat.speak();
		Animal.animal("Dog");
		Animal.animal("Dog", "Animal","pig");
	}
}