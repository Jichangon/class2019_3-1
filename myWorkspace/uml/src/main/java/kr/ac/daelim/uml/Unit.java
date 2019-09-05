package kr.ac.daelim.uml;

public class Unit {

	public String name;
	public int health;
	
	public void move() {
		System.out.println("유닛이 이동합니다");
		
	}
	
	public void underAttack(Charactor charactor) {
		System.out.println("유닛이 공격받는다");
		
	}
}
