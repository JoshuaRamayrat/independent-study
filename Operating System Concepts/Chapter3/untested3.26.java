/*
3.25
Write an echo server using the Java networking API from section 3.6.1.
Echo servers write back whatever is sent to them.

Notes:
  Sockets are endpoints for communication. They use a client-server architecture.
  Incoming client requests are specified by a port.
  Echo servers reads binary data in addition to characters from the client server.

*/

import java.net.*;
import java.io.*;
/*
  Deals with data at the byte level.
  The echo server must extend this imported class.
*/
import java.io.InputStream;


/*
  When a client connection is received, the server will loop
  and do the following:
    read data from the socket into the buffer.
    write the contents of the buffer back to the client.
*/
public class echoServer
{
  public static void main(String[] args)
  {
    try
    {
      ServerSocket echoSock = new ServerSocket(6013);
      Socket clientSock = echoSock.accept();
      // The 'read()' method returns -1 when the client server closes.
      while (client.read())
      {
        InputStream in = clientSocket.getInputStream();
        BufferedReader bin = new BufferedReader(new InputStreamReader(in));
        String line = bin.readLine();

        PrintWriter pout = new PrintWriter(clientSock.getOutputStream(), true);
        pout.println(line);
      }
    }
  }
}
