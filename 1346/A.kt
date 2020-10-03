private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles
 
fun main(args: Array<String>) {
    var t=readInt()
    while(t-- >0)
    {
        var (n,k) = readInts()
        var x = n/((k+1) *(k*k+1))
        var y = x*k
        var z = x*k*k
        var p = x*k*k*k
         println("$x $y $z $p")
    }

}