package Java8Features;
// differences between interfaces and abstract class
public class a_7 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}



// differences between interfaces and abstract class
// 1. variables always public static final                 1. variables can be private, public, static , protected, final
// interface i{ int a=10;} 
// public static final int a;

// 2. we cannot write constructors                         2. we can write constructors    
// constructor is there to initialize the 
// non-static data but here we dont have non-static  

// 3. Interface doesn't talks about state of an object      3. may talks about state

// 4. we can't write blocks {initilizers are                4. abstract class can allow both static and instance types   
// static or instance}

// 5. it can allows abstract methods but not concrete        5. it allows both concrete as well as abstract methods

// 6. we write logic in interfacesby using default methods   6. we cannot write default methods in abstract classes as well as classes

// 7. it support multiple inheritance	                     7. it will not support multiple inheritance

// 8. we can't write object classmethods in interface        8. we can write object class methods in interfaces
