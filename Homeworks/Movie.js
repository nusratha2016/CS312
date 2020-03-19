class Movie {
  constructor(name,year) {
    this.moviename = name;
    this.movieyear = year;
    this.ratingcount = 0;
    this.rating1 = 0;
    this.rating2 = 0;
    this.rating3 = 0;
    this.rating4 = 0;
    this.rating5 = 0;
  };


 addRating(r) {
   switch(r) {
     case 1: this.rating1 += r;
     case 2: this.rating2 += r;
     case 3: this.rating3 += r;
     case 4: this.rating4 += r;
     case 5: this.rating5 += r;
     default:break;
   }
   this.ratingcount++;
 }


get averageRating() {
  var averageRating = 0;
  let rating_count = (this.rating1 + this.rating2 + this.rating3 + this.rating4 +this.rating5 );
    return ( (1 * this.rating1) + (2 * this.rating2) + (3 * this.rating3) + (4 * this.rating4) + (5 * this.rating5)) / (rating_count );
  };

 print() {
   console.log(this.moviename);
   console.log("Avg Rating: " + this.averageRating.toFixed());
   console.log("Rated by "+ this.ratingcount +" users.\n");
 }

}

let lord1 = new Movie("FIRST MOVIE \nLord of the Rings: The Fellowship of the Ring, 2001");

let lord2 = new Movie("SECOND MOVIE \nLord of the Rings: The Return of the King, 2003");

for (let i = 1; i <= 5; i++) {
 lord1.addRating(5);}

 for (let i = 1; i <= 15; i++)
 lord1.addRating(4);
 //Add 5 ratings of 3stars to lord1 object
 for (let i = 1; i <= 5; i++)
 lord1.addRating(3);
 //Add 2 ratings of 2stars to lord1 object
 lord1.addRating(2);
 lord1.addRating(2);
//lord2 RATINGS
 //Add 3 ratings of 4stars to lord2 object
 for (let i = 1; i <= 3; i++)
 lord2.addRating(4);
 //Add 1 ratings of 2stars to lord2 object
 lord2.addRating(2);
 //Add 1 ratings of 1stars to lord2 object
 lord2.addRating(1);

let movieCommuter = new Movie("THIRD MOVIE \nThe Commuter, 2018");
let moviePanther = new Movie ("FOUR MOVIE \nBlack Panther,2018");
let movieGamenight = new Movie("FIVE MOVIE \nGame Night,2018");

movieCommuter.addRating(1);
movieCommuter.addRating(1);
for(let i = 1; i <= 13; i++) {
  movieCommuter.addRating(5);
}

moviePanther.addRating(2);
moviePanther.addRating(2);
for(let i = 1; i <= 8; i++) {
  moviePanther.addRating(4);
}

movieGamenight.addRating(3);
movieGamenight.addRating(3);
for(let i = 1; i <= 8; i++) {
  movieGamenight.addRating(4);
}

lord1.print();
lord2.print();
movieCommuter.print();
moviePanther.print();
movieGamenight.print();
