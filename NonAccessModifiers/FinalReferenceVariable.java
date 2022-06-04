package NonAccessModifiers;

public class FinalReferenceVariable {

	public static void main(String[] args) {
		final StringBuilder s = 	new StringBuilder("Geeks");
		System.out.println(s);
		s.append("forgeeks");
		System.out.println(s);

	}

}

// As we all know that a final variable cannot be re-assign.
// But in the case of a reference final variable, the internal state of the 
// object pointed by that reference variable can be changed. Note 
// that this is not re-assigning. This property of final is called non-transitivity.