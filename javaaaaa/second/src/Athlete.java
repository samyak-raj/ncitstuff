abstract class Athlete {
    String name, team;

    public Athlete(String name, String team) {
        this.name = name;
        this.team = team;
    }

    abstract void showStats();
}

class FootballPlayer extends  Athlete {
    int goals;

    public FootballPlayer(String name, String team, int goals) {
        super(name, team);
        this.goals = goals;
    }

    public String getDetails() {
        return "Name: " + this.name + ", Team: " + this.team;
    }

    void showStats() {
        System.out.println("Goals: " + this.goals);
    }
}

class TestAthlete {
    public static void main(String[] args) {
        FootballPlayer p1 = new FootballPlayer("srs", "C", 10);
        System.out.println(p1.getDetails());
        p1.showStats();
    }
}