//
// Generated file, do not edit! Created by nedtool 5.4 from AFrame.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __AFRAME_M_H
#define __AFRAME_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>AFrame.msg:16</tt> by nedtool.
 * <pre>
 * //
 * // This program is free software: you can redistribute it and/or modify
 * // it under the terms of the GNU Lesser General Public License as published by
 * // the Free Software Foundation, either version 3 of the License, or
 * // (at your option) any later version.
 * // 
 * // This program is distributed in the hope that it will be useful,
 * // but WITHOUT ANY WARRANTY; without even the implied warranty of
 * // MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * // GNU Lesser General Public License for more details.
 * // 
 * // You should have received a copy of the GNU Lesser General Public License
 * // along with this program.  If not, see http://www.gnu.org/licenses/.
 * //
 * packet AFrame
 * {
 *     bool addAMAC = true;
 *     int level = 0;
 *     int AMAC[16];
 * }
 * </pre>
 */
class AFrame : public ::omnetpp::cPacket
{
  protected:
    bool addAMAC;
    int level;
    int AMAC[16];

  private:
    void copy(const AFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AFrame&);

  public:
    AFrame(const char *name=nullptr, short kind=0);
    AFrame(const AFrame& other);
    virtual ~AFrame();
    AFrame& operator=(const AFrame& other);
    virtual AFrame *dup() const override {return new AFrame(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual bool getAddAMAC() const;
    virtual void setAddAMAC(bool addAMAC);
    virtual int getLevel() const;
    virtual void setLevel(int level);
    virtual unsigned int getAMACArraySize() const;
    virtual int getAMAC(unsigned int k) const;
    virtual void setAMAC(unsigned int k, int AMAC);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const AFrame& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, AFrame& obj) {obj.parsimUnpack(b);}


#endif // ifndef __AFRAME_M_H

