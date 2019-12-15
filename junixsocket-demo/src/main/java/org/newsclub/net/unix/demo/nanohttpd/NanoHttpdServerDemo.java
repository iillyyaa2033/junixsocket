/**
 * junixsocket
 *
 * Copyright 2009-2019 Christian Kohlschütter
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package org.newsclub.net.unix.demo.nanohttpd;

import java.io.File;
import java.io.IOException;
import java.net.ServerSocket;

import org.newsclub.net.unix.AFUNIXServerSocket;
import org.newsclub.net.unix.AFUNIXSocketAddress;

import fi.iki.elonen.NanoHTTPD;

public class NanoHttpdServerDemo extends NanoHTTPD {

  public NanoHttpdServerDemo(AFUNIXSocketAddress socketAddress) throws IOException {
    super(0);
    setServerSocketFactory(new ServerSocketFactory() {

      @Override
      public ServerSocket create() throws IOException {
        return AFUNIXServerSocket.forceBindOn(socketAddress);
      }
    });
    System.out.println("Address: " + socketAddress);
    System.out.println("Try:  curl --unix-socket " + socketAddress.getPath()
        + " https://localhost/");
  }

  public static void main(String[] args) throws IOException {
    new NanoHttpdServerDemo( //
        new AFUNIXSocketAddress(new File("/tmp/junixsocket-http-server.sock")) //
    ).start(NanoHTTPD.SOCKET_READ_TIMEOUT, false);
  }

  @Override
  public Response serve(IHTTPSession session) {
    return newFixedLengthResponse("Hello world\n");
  }
}
