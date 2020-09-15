import kotlin.math.min
import kotlin.math.max

private fun readln() = readLine()!!
private fun readlnInt() = readln().toInt()
private fun readlnStrings() = readln().split(' ')
private fun readIntArray() = readlnStrings().run { IntArray(size) { get(it).toInt() } }

public class Tuple(val u: Int, val v: Int, val w: Int)

fun solve() {
    var (n, m) = readIntArray()
    var a = IntArray(n)
    var g = List(m) {
        var (u, v, w) = readIntArray()
        a[u-1] = max(a[u-1], w);
        a[v-1] = max(a[v-1], w);
        Tuple(u-1, v-1, w)
    }

    for (i in 0 until m) {
        var t = g[i];
        if(t.w != min(a[t.u], a[t.v])) {
            println("NO");
            return
        }
    }
    println("YES");
    println(a.joinToString(" "))
}

fun main(args: Array<String>) {
    var t:Int = readlnInt()
    for (i in 0 until t) {
        solve()
    }
}
