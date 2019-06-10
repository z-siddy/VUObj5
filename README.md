# VU OOP 5th task
This task is all about strings and associative containers. The main task is to take a piece of text or a fragment and count every word occurrence. Every word that has occurred more than once are outputted and lines in the text/fragment where this word occurred are displayed. Also the program finds every URL address in the text and also outputs it.

## The WORD class

    class Word {
    
		private:
		string tekstas;
		int eilute;
		
		public:
		Word(string a, int  b=0) : tekstas{a}, eilute{b} {};
		string get_tekstas() const { return tekstas; };
		int get_eilute() const { return eilute; };
		friend bool operator == (const Word &a, const Word &b) { return  a.tekstas  ==  b.tekstas; };
		bool operator < (const Word &word) const { return ( this->tekstas  <  word.tekstas ); };
	};
 As you can see, the class contains of some private variables. We save the string of a word in *tekstas* and the line number in *eilute*. Below is the class constructor, GET'ers and operators for comparison.
## Results
I took a text fragment from "Harry Potter".

    Today was slow, exhausting and beyond contempt. It was like this every day. The slow ticking of the clock seemed even more reluctant to continue its lullaby as the day continued. As luring as it was, Harry knew he had to stay awake. Not only was it expected of him, but angering his teacher would only cause problems at home. Crossing his Aunt and Uncle created to a string of consequences. While the days were painfully slow, the Dursley's were another issue.
    While living at Number 4 Privet Drive with the Dursley's, Harry learned a lot about them. Not that the Dursley's were interesting, the Dursley's were normal. At least, the Dursley's were as normal as they could be. You could never make them admit it, but the Dursley's had something abnormal living in the house. Harry had heard both his Aunt and Uncle use the word "freak" several times. It did not take long for Harry to discover they were talking about him. 
    Early in his life, Dudley learned from his parents and began to taunt Harry. His behavior continued to get worse as Dudley grew older and more confident. During this time is when Harry's "freakishness" started to show, but apparently, he was a freak since birth.
The output: 

    Tekste rasti URL adresai:
    
	"Aunt" zodis tekste rastas 2 kartus (Eilutese: 1 3 )
	"Dudley" zodis tekste rastas 2 kartus (Eilutese: 5 5 )
	"Dursley" zodis tekste rastas 6 kartus (Eilutese: 1 3 3 3 3 3 )
	"Harry" zodis tekste rastas 6 kartus (Eilutese: 1 3 3 3 5 5 )
	"It" zodis tekste rastas 2 kartus (Eilutese: 1 3 )
	"Not" zodis tekste rastas 2 kartus (Eilutese: 1 3 )
	"Uncle" zodis tekste rastas 2 kartus (Eilutese: 1 3 )
	"While" zodis tekste rastas 2 kartus (Eilutese: 1 3 )
	"a" zodis tekste rastas 3 kartus (Eilutese: 1 3 5 )
	"about" zodis tekste rastas 2 kartus (Eilutese: 3 3 )
	"and" zodis tekste rastas 5 kartus (Eilutese: 1 1 3 5 5 )
	"as" zodis tekste rastas 5 kartus (Eilutese: 1 1 3 3 5 )
	"at" zodis tekste rastas 2 kartus (Eilutese: 1 3 )
	"but" zodis tekste rastas 3 kartus (Eilutese: 1 3 5 )
	"continued" zodis tekste rastas 2 kartus (Eilutese: 1 5 )
	"could" zodis tekste rastas 2 kartus (Eilutese: 3 3 )
	"day" zodis tekste rastas 2 kartus (Eilutese: 1 1 )
	"freak" zodis tekste rastas 2 kartus (Eilutese: 3 5 )
	"had" zodis tekste rastas 3 kartus (Eilutese: 1 3 3 )
	"he" zodis tekste rastas 2 kartus (Eilutese: 1 5 )
	"him" zodis tekste rastas 2 kartus (Eilutese: 1 3 )
	"his" zodis tekste rastas 5 kartus (Eilutese: 1 1 3 5 5 )
	"in" zodis tekste rastas 2 kartus (Eilutese: 3 5 )
	"it" zodis tekste rastas 3 kartus (Eilutese: 1 1 3 )
	"learned" zodis tekste rastas 2 kartus (Eilutese: 3 5 )
	"living" zodis tekste rastas 2 kartus (Eilutese: 3 3 )
	"more" zodis tekste rastas 2 kartus (Eilutese: 1 5 )
	"normal" zodis tekste rastas 2 kartus (Eilutese: 3 3 )
	"of" zodis tekste rastas 3 kartus (Eilutese: 1 1 1 )
	"only" zodis tekste rastas 2 kartus (Eilutese: 1 1 )
	"s" zodis tekste rastas 7 kartus (Eilutese: 1 3 3 3 3 3 5 )
	"slow" zodis tekste rastas 3 kartus (Eilutese: 1 1 1 )
	"the" zodis tekste rastas 11 kartus (Eilutese: 1 1 1 1 3 3 3 3 3 3 3 )
	"them" zodis tekste rastas 2 kartus (Eilutese: 3 3 )
	"they" zodis tekste rastas 2 kartus (Eilutese: 3 3 )
	"this" zodis tekste rastas 2 kartus (Eilutese: 1 5 )
	"to" zodis tekste rastas 7 kartus (Eilutese: 1 1 1 3 5 5 5 )
	"was" zodis tekste rastas 5 kartus (Eilutese: 1 1 1 1 5 )
	"were" zodis tekste rastas 6 kartus (Eilutese: 1 1 3 3 3 3 )
Now I added some random URLs in the text:

    Tekste rasti URL adresai:
	15min.lt
	http://delfi.lt

	"Aunt" zodis tekste rastas 2 kartus (Eilutese: 1 3 )
	"Dudley" zodis tekste rastas 2 kartus (Eilutese: 5 5 )
	"Dursley" zodis tekste rastas 6 kartus (Eilutese: 1 3 3 3 3 3 )
	"Harry" zodis tekste rastas 6 kartus (Eilutese: 1 3 3 3 5 5 )
	"It" zodis tekste rastas 2 kartus (Eilutese: 1 3 )
	"Not" zodis tekste rastas 2 kartus (Eilutese: 1 3 )
	"Uncle" zodis tekste rastas 2 kartus (Eilutese: 1 3 )
	"While" zodis tekste rastas 2 kartus (Eilutese: 1 3 )
	"a" zodis tekste rastas 3 kartus (Eilutese: 1 3 5 )
	"about" zodis tekste rastas 2 kartus (Eilutese: 3 3 )
	"and" zodis tekste rastas 5 kartus (Eilutese: 1 1 3 5 5 )
	"as" zodis tekste rastas 5 kartus (Eilutese: 1 1 3 3 5 )
	"at" zodis tekste rastas 2 kartus (Eilutese: 1 3 )
	"but" zodis tekste rastas 3 kartus (Eilutese: 1 3 5 )
	"continued" zodis tekste rastas 2 kartus (Eilutese: 1 5 )
	"could" zodis tekste rastas 2 kartus (Eilutese: 3 3 )
	"day" zodis tekste rastas 2 kartus (Eilutese: 1 1 )
	"freak" zodis tekste rastas 2 kartus (Eilutese: 3 5 )
	"had" zodis tekste rastas 3 kartus (Eilutese: 1 3 3 )
	"he" zodis tekste rastas 2 kartus (Eilutese: 1 5 )
	"him" zodis tekste rastas 2 kartus (Eilutese: 1 3 )
	"his" zodis tekste rastas 5 kartus (Eilutese: 1 1 3 5 5 )
	"in" zodis tekste rastas 2 kartus (Eilutese: 3 5 )
	"it" zodis tekste rastas 3 kartus (Eilutese: 1 1 3 )
	"learned" zodis tekste rastas 2 kartus (Eilutese: 3 5 )
	"living" zodis tekste rastas 2 kartus (Eilutese: 3 3 )
	"more" zodis tekste rastas 2 kartus (Eilutese: 1 5 )
	"normal" zodis tekste rastas 2 kartus (Eilutese: 3 3 )
	"of" zodis tekste rastas 3 kartus (Eilutese: 1 1 1 )
	"only" zodis tekste rastas 2 kartus (Eilutese: 1 1 )
	"s" zodis tekste rastas 7 kartus (Eilutese: 1 3 3 3 3 3 5 )
	"slow" zodis tekste rastas 3 kartus (Eilutese: 1 1 1 )
	"the" zodis tekste rastas 11 kartus (Eilutese: 1 1 1 1 3 3 3 3 3 3 3 )
	"them" zodis tekste rastas 2 kartus (Eilutese: 3 3 )
	"they" zodis tekste rastas 2 kartus (Eilutese: 3 3 )
	"this" zodis tekste rastas 2 kartus (Eilutese: 1 5 )
	"to" zodis tekste rastas 7 kartus (Eilutese: 1 1 1 3 5 5 5 )
	"was" zodis tekste rastas 5 kartus (Eilutese: 1 1 1 1 5 )
	"were" zodis tekste rastas 6 kartus (Eilutese: 1 1 3 3 3 3 )
## The requirements of setting up this program
To run this program all you need is an enviroment with CMake (I'm using CLion from Jetbrains). In this repository you will find a file named CMakeLists.txt. The IDE will auto-detect this file and will let you compile this program. The text file with input text is located in **build** directory. Good luck!