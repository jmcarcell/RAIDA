// -*- C++ -*-
// AID-GENERATED
// =========================================================================
// This class was generated by AID - Abstract Interface Definition          
// DO NOT MODIFY, but use the org.freehep.aid.Aid utility to regenerate it. 
// =========================================================================
#ifndef AIDA_IHISTOGRAM1D_H
#define AIDA_IHISTOGRAM1D_H 1

//  This file is part of the AIDA library
//  Copyright (C) 2002 by the AIDA team.  All rights reserved.
//  This library is free software and under the terms of the
//  GNU Library General Public License described in the LGPL.txt 

#include "AIDA/IHistogram.h"
#include <TH1D.h>

namespace AIDA {

  /// class IAxis;

/**
 * User level interface to 1D Histogram.
 *
 * @author The AIDA team (http://aida.freehep.org/)
 *
 */
 
class IHistogram1D : virtual public IHistogram {

public: 
    /// Destructor.
    virtual ~IHistogram1D() { /* nop */; }

    /**
     * Fill the IHistogram1D with a value and the
     * corresponding weight.
     * @param x      The value to be filled in.
     * @param weight The corresponding weight (by default 1).
     * @return false If the weight is <0 or >1 (?).
     *
     */
  virtual bool fill(double x, double weight = 1.) = 0;

    /**
     * The weighted mean of a bin. 
     * @param index The bin number (0...N-1) or OVERFLOW or UNDERFLOW.
     * @return      The mean of the corresponding bin.
     *
     */
  virtual double binMean(int index) const = 0;

    /**
     * Number of entries in the corresponding bin (ie the number of times fill was called for this bin).
     * @param index The bin number (0...N-1) or OVERFLOW or UNDERFLOW.
     * @return      The number of entries in the corresponding bin. 
     *
     */
  virtual int binEntries(int index) const = 0;

    /**
     * Total height of the corresponding bin (ie the sum of the weights in this bin).
     * @param index The bin number (0...N-1) or OVERFLOW or UNDERFLOW.
     * @return      The height of the corresponding bin.
     *
     */
  virtual double binHeight(int index) const = 0;

    /**
     * The error of a given bin.
     * @param index The bin number (0...N-1) or OVERFLOW or UNDERFLOW.
     * @return      The error on the corresponding bin.
     *
     */
  virtual double binError(int index) const = 0;

    /**
     * The mean of the whole IHistogram1D.
     * @return The mean of the IHistogram1D.
     *
     */
  virtual double mean() const = 0;

    /**
     * The RMS of the whole IHistogram1D.
     * @return The RMS if the IHistogram1D.
     *
     */
  virtual double rms() const = 0;

    /**
     * Get the x axis of the IHistogram1D.
     * @return The x coordinate IAxis.
     *
     */
  /// virtual const IAxis & axis() const = 0;

    /**
     * Get the bin number corresponding to a given coordinate along the x axis.
     * This is a convenience method, equivalent to <tt>axis().coordToIndex(coord)</tt>.
     * @see IAxis#coordToIndex(double)
     * @param coord The coordinalte along the x axis.
     * @return      The corresponding bin number.
     *
     */
  virtual int coordToIndex(double coord) const = 0;

    /**
     * Add to this IHistogram1D the contents of another IHistogram1D.
     * @param hist The IHistogram1D to be added to this IHistogram1D.
     * @return false If the IHistogram1Ds binnings are incompatible.
     *
     */
  virtual bool add(const IHistogram1D & hist) = 0;

protected:
  //  TH1D *_histogram;
  //  TH1D *_histogramAIDA;
}; // class
} // namespace AIDA
#endif /* ifndef AIDA_IHISTOGRAM1D_H */
