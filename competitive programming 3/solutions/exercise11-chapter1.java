import java.util.*;
import javax.script.ScriptEngineManager;
import javax.script.ScriptEngine;

class Main{

	public static void main(String args[]) throws Exception{

		ScriptEngineManager mgr = new ScriptEngineManager();
		ScriptEngine engine = mgr.getEngineByName("JavaScript");
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextLine()) System.out.println(engine.eval(sc.nextLine()));
	}
}