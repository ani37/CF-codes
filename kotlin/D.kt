private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles
 
fun main(args: Array<String>) {
 
        var (n, k) = readInts()
        var hm : HashMap<String, Int>
            = HashMap<String, Int> ()
         
        for(j in 0..n-1){
            var s = readLn()
             hm.put(s , j)
        }
        var q =readInt()
        for(j in 0..q-1){
            var s = readLn()
            var ans : HashMap<Int?, Int> 
            = HashMap<Int?, Int> ()
            for(m in 0..k)
                if(hm.containsKey(s.substring(0, m) + s.substring(m+1)) ){
                  val x = hm[s.substring(0, m) + s.substring(m+1)];
                  ans.put(x, 1)
                  }
            println(ans.size)
                  
          
            
        }
     
 
    
 
}
