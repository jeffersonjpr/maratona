//https://www.codewars.com/kata/two-fighters-one-winner/java
public class Kata {

    public static String declareWinner(Fighter fighter1, Fighter fighter2, String firstAttacker) {
        //primeiro lutador começa atacando
        if(fighter1.name.equals(firstAttacker)){
            while(fighter1.health > 0 && fighter2.health > 0){
                fighter2.health -= fighter1.damagePerAttack;
                if(fighter2.health <= 0) break;
                fighter1.health -= fighter2.damagePerAttack;
            }
        }
        //segundo lutador começa atacando
        else{
             while(fighter1.health > 0 && fighter2.health > 0){
                fighter1.health -= fighter2.damagePerAttack;
                if(fighter1.health <= 0) break;
                fighter2.health -= fighter1.damagePerAttack;
            }
        }
        
        return (fighter1.health > 0 ? fighter1.name:fighter2.name);
    }
}
