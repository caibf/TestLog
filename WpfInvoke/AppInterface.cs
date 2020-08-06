using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace WpfInvoke
{
    public enum LogLevel
    {
        trace = 0,
        debug = 1,
        info = 2,
        warn = 3,
        err = 4,
        critical = 5,
        off = 6,
    }

    public class AppInterface
    {
        [DllImport("CppInterop.dll")]
        public static extern void LoggerInterop(string msg, LogLevel lvl, [CallerFilePath] string filename_in = null, [CallerLineNumber] int line_in = 0, [CallerMemberName] string funcname_in = null);
    }
}
