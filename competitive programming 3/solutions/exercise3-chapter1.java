import java.util.*;


/**
  date that search is 09/08/2010
*/
class Main{

	public static void main(String args[]){
		String [] names = new String[] {"","Sun","Mon","Tue","Wed","Thu","Fri","Sat"};

		Calendar calendar = new GregorianCalendar(2010,7,9);
		System.out.println(names[calendar.get(Calendar.DAY_OF_WEEK)]);
	}
}