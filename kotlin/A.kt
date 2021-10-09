private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles
 
fun main(args: Array<String>) {
    var T = readInt();
   
    
    for(i in 0..T-1){
        var (n, k) = readInts()
        var ans = 0
        for(j in 1..n){
            var (x, y) = readInts()
            if(x <= k && y >= k)
                ans = maxOf(y-k+1, ans)
            
        }
      
       
       
     println(ans)
    }
 
}