/* <!-- copyright */
/*
 * aria2 - The high speed download utility
 *
 * Copyright (C) 2009 Tatsuhiro Tsujikawa
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * In addition, as a special exception, the copyright holders give
 * permission to link the code of portions of this program with the
 * OpenSSL library under certain conditions as described in each
 * individual source file, and distribute linked combinations
 * including the two.
 * You must obey the GNU General Public License in all respects
 * for all of the code used other than OpenSSL.  If you modify
 * file(s) with this exception, you may extend this exception to your
 * version of the file(s), but you are not obligated to do so.  If you
 * do not wish to do so, delete this exception statement from your
 * version.  If you delete this exception statement from all source
 * files in the program, then also delete it here.
 */
/* copyright --> */
#ifndef _D_XML_RPC_METHOD_IMPL_H_
#define _D_XML_RPC_METHOD_IMPL_H_

#include "XmlRpcMethod.h"

namespace aria2 {

namespace xmlrpc {

class AddUriXmlRpcMethod:public XmlRpcMethod {
protected:
  virtual BDE process(const XmlRpcRequest& req, DownloadEngine* e);
};

class RemoveXmlRpcMethod:public XmlRpcMethod {
protected:
  virtual BDE process(const XmlRpcRequest& req, DownloadEngine* e);
};

class AddTorrentXmlRpcMethod:public XmlRpcMethod {
protected:
  virtual BDE process(const XmlRpcRequest& req, DownloadEngine* e);
};

class AddMetalinkXmlRpcMethod:public XmlRpcMethod {
protected:
  virtual BDE process(const XmlRpcRequest& req, DownloadEngine* e);
};

class PurgeDownloadResultXmlRpcMethod:public XmlRpcMethod {
protected:
  virtual BDE process(const XmlRpcRequest& req, DownloadEngine* e);
};

class GetUrisXmlRpcMethod:public XmlRpcMethod {
protected:
  virtual BDE process(const XmlRpcRequest& req, DownloadEngine* e);
};

class GetFilesXmlRpcMethod:public XmlRpcMethod {
protected:
  virtual BDE process(const XmlRpcRequest& req, DownloadEngine* e);
};

class GetPeersXmlRpcMethod:public XmlRpcMethod {
protected:
  virtual BDE process(const XmlRpcRequest& req, DownloadEngine* e);
};

class TellStatusXmlRpcMethod:public XmlRpcMethod {
protected:
  virtual BDE process(const XmlRpcRequest& req, DownloadEngine* e);
};

class TellActiveXmlRpcMethod:public XmlRpcMethod {
protected:
  virtual BDE process(const XmlRpcRequest& req, DownloadEngine* e);
};

class ChangeOptionXmlRpcMethod:public XmlRpcMethod {
protected:
  virtual BDE process(const XmlRpcRequest& req, DownloadEngine* e);
};

class ChangeGlobalOptionXmlRpcMethod:public XmlRpcMethod {
protected:
  virtual BDE process(const XmlRpcRequest& req, DownloadEngine* e);
};

class NoSuchMethodXmlRpcMethod:public XmlRpcMethod {
protected:
  virtual BDE process(const XmlRpcRequest& req, DownloadEngine* e);
};

} // namespace xmlrpc

} // namespace aria2

#endif // _D_XML_RPC_METHOD_IMPL_H_
