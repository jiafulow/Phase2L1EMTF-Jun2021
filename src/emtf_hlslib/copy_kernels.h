// This file is automatically generated. Please do not edit by hand.

#ifndef __EMTF_HLSLIB_COPY_KERNELS_H__
#define __EMTF_HLSLIB_COPY_KERNELS_H__

#include <algorithm>  // provides std::copy, std::fill

// EMTF HLS
#include "layer_helpers.h"

namespace emtf_hlslib {

  namespace phase2 {

    namespace detail {

      template <unsigned int N, typename T>
      void copy_n_values(const T in0[N], T out[N]) {
#ifndef __SYNTHESIS__
        std::copy(in0, in0 + N, out);
#else
        for (unsigned i = 0; i < N; i++) {
          out[i] = in0[i];
        }
#endif  // __SYNTHESIS__ not defined
      }

      template <unsigned int N, typename T>
      void fill_n_values(T out[N], const T& value) {
#ifndef __SYNTHESIS__
        std::fill(out, out + N, value);
#else
        for (unsigned i = 0; i < N; i++) {
          out[i] = value;
        }
#endif  // __SYNTHESIS__ not defined
      }

    }  // namespace detail

  }  // namespace phase2

}  // namespace emtf_hlslib

#endif  // __EMTF_HLSLIB_COPY_KERNELS_H__ not defined
