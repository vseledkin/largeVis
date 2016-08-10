// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// dbscan_e
IntegerVector dbscan_e(arma::sp_mat& edges, double eps, int minPts, bool verbose);
RcppExport SEXP largeVis_dbscan_e(SEXP edgesSEXP, SEXP epsSEXP, SEXP minPtsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::sp_mat& >::type edges(edgesSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type minPts(minPtsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(dbscan_e(edges, eps, minPts, verbose));
    return __result;
END_RCPP
}
// dbscan_ed
IntegerVector dbscan_ed(arma::sp_mat& edges, arma::mat& data, double eps, int minPts, bool verbose);
RcppExport SEXP largeVis_dbscan_ed(SEXP edgesSEXP, SEXP dataSEXP, SEXP epsSEXP, SEXP minPtsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::sp_mat& >::type edges(edgesSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type minPts(minPtsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(dbscan_ed(edges, data, eps, minPts, verbose));
    return __result;
END_RCPP
}
// dbscan_nd
IntegerVector dbscan_nd(arma::imat& neighbors, arma::mat& data, double eps, int minPts, bool verbose);
RcppExport SEXP largeVis_dbscan_nd(SEXP neighborsSEXP, SEXP dataSEXP, SEXP epsSEXP, SEXP minPtsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::imat& >::type neighbors(neighborsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type minPts(minPtsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(dbscan_nd(neighbors, data, eps, minPts, verbose));
    return __result;
END_RCPP
}
// optics_e
List optics_e(arma::sp_mat& edges, double eps, int minPts, bool verbose);
RcppExport SEXP largeVis_optics_e(SEXP edgesSEXP, SEXP epsSEXP, SEXP minPtsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::sp_mat& >::type edges(edgesSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type minPts(minPtsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(optics_e(edges, eps, minPts, verbose));
    return __result;
END_RCPP
}
// optics_ed
List optics_ed(arma::sp_mat& edges, arma::mat& data, double eps, int minPts, bool verbose);
RcppExport SEXP largeVis_optics_ed(SEXP edgesSEXP, SEXP dataSEXP, SEXP epsSEXP, SEXP minPtsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::sp_mat& >::type edges(edgesSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type minPts(minPtsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(optics_ed(edges, data, eps, minPts, verbose));
    return __result;
END_RCPP
}
// optics_nd
List optics_nd(arma::imat& neighbors, arma::mat& data, double eps, int minPts, bool verbose);
RcppExport SEXP largeVis_optics_nd(SEXP neighborsSEXP, SEXP dataSEXP, SEXP epsSEXP, SEXP minPtsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::imat& >::type neighbors(neighborsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type minPts(minPtsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(optics_nd(neighbors, data, eps, minPts, verbose));
    return __result;
END_RCPP
}
// silhouetteDbscan
void silhouetteDbscan(const arma::sp_mat& edges, NumericMatrix sil);
RcppExport SEXP largeVis_silhouetteDbscan(SEXP edgesSEXP, SEXP silSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type edges(edgesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type sil(silSEXP);
    silhouetteDbscan(edges, sil);
    return R_NilValue;
END_RCPP
}
// searchTrees
arma::imat searchTrees(const int& threshold, const int& n_trees, const int& K, const int& maxIter, const arma::mat& data, const std::string& distMethod, Rcpp::Nullable< Rcpp::NumericVector> seed, bool verbose);
RcppExport SEXP largeVis_searchTrees(SEXP thresholdSEXP, SEXP n_treesSEXP, SEXP KSEXP, SEXP maxIterSEXP, SEXP dataSEXP, SEXP distMethodSEXP, SEXP seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const int& >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_trees(n_treesSEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distMethod(distMethodSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable< Rcpp::NumericVector> >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(searchTrees(threshold, n_trees, K, maxIter, data, distMethod, seed, verbose));
    return __result;
END_RCPP
}
// fastDistance
arma::vec fastDistance(const NumericVector is, const NumericVector js, const arma::mat& data, const std::string& distMethod, bool verbose);
RcppExport SEXP largeVis_fastDistance(SEXP isSEXP, SEXP jsSEXP, SEXP dataSEXP, SEXP distMethodSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector >::type is(isSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type js(jsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distMethod(distMethodSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(fastDistance(is, js, data, distMethod, verbose));
    return __result;
END_RCPP
}
// fastCDistance
arma::vec fastCDistance(const arma::vec& is, const arma::vec& js, const arma::uvec& i_locations, const arma::uvec& p_locations, const arma::vec& x, const std::string& distMethod, bool verbose);
RcppExport SEXP largeVis_fastCDistance(SEXP isSEXP, SEXP jsSEXP, SEXP i_locationsSEXP, SEXP p_locationsSEXP, SEXP xSEXP, SEXP distMethodSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::vec& >::type is(isSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type js(jsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type i_locations(i_locationsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type p_locations(p_locationsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distMethod(distMethodSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(fastCDistance(is, js, i_locations, p_locations, x, distMethod, verbose));
    return __result;
END_RCPP
}
// fastSDistance
arma::vec fastSDistance(const arma::vec& is, const arma::vec& js, const arma::uvec& i_locations, const arma::uvec& j_locations, const arma::vec& x, const std::string& distMethod, bool verbose);
RcppExport SEXP largeVis_fastSDistance(SEXP isSEXP, SEXP jsSEXP, SEXP i_locationsSEXP, SEXP j_locationsSEXP, SEXP xSEXP, SEXP distMethodSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::vec& >::type is(isSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type js(jsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type i_locations(i_locationsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type j_locations(j_locationsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distMethod(distMethodSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(fastSDistance(is, js, i_locations, j_locations, x, distMethod, verbose));
    return __result;
END_RCPP
}
// referenceWij
arma::sp_mat referenceWij(const arma::ivec& i, const arma::ivec& j, arma::vec& d, double perplexity);
RcppExport SEXP largeVis_referenceWij(SEXP iSEXP, SEXP jSEXP, SEXP dSEXP, SEXP perplexitySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::ivec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const arma::ivec& >::type j(jSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< double >::type perplexity(perplexitySEXP);
    __result = Rcpp::wrap(referenceWij(i, j, d, perplexity));
    return __result;
END_RCPP
}
// sgd
arma::mat sgd(arma::mat coords, arma::ivec& targets_i, arma::ivec& sources_j, arma::ivec& ps, arma::vec& weights, const double gamma, const double rho, const long long n_samples, const int M, const double alpha, const Rcpp::Nullable<Rcpp::NumericVector> seed, const bool verbose);
RcppExport SEXP largeVis_sgd(SEXP coordsSEXP, SEXP targets_iSEXP, SEXP sources_jSEXP, SEXP psSEXP, SEXP weightsSEXP, SEXP gammaSEXP, SEXP rhoSEXP, SEXP n_samplesSEXP, SEXP MSEXP, SEXP alphaSEXP, SEXP seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type coords(coordsSEXP);
    Rcpp::traits::input_parameter< arma::ivec& >::type targets_i(targets_iSEXP);
    Rcpp::traits::input_parameter< arma::ivec& >::type sources_j(sources_jSEXP);
    Rcpp::traits::input_parameter< arma::ivec& >::type ps(psSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const long long >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< const int >::type M(MSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericVector> >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(sgd(coords, targets_i, sources_j, ps, weights, gamma, rho, n_samples, M, alpha, seed, verbose));
    return __result;
END_RCPP
}
// searchTreesCSparse
arma::imat searchTreesCSparse(const int& threshold, const int& n_trees, const int& K, const int& maxIter, const arma::uvec& i, const arma::uvec& p, const arma::vec& x, const std::string& distMethod, Rcpp::Nullable< Rcpp::NumericVector> seed, bool verbose);
RcppExport SEXP largeVis_searchTreesCSparse(SEXP thresholdSEXP, SEXP n_treesSEXP, SEXP KSEXP, SEXP maxIterSEXP, SEXP iSEXP, SEXP pSEXP, SEXP xSEXP, SEXP distMethodSEXP, SEXP seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const int& >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_trees(n_treesSEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distMethod(distMethodSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable< Rcpp::NumericVector> >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(searchTreesCSparse(threshold, n_trees, K, maxIter, i, p, x, distMethod, seed, verbose));
    return __result;
END_RCPP
}
// searchTreesTSparse
arma::imat searchTreesTSparse(const int& threshold, const int& n_trees, const int& K, const int& maxIter, const arma::uvec& i, const arma::uvec& j, const arma::vec& x, const std::string& distMethod, Rcpp::Nullable< Rcpp::NumericVector> seed, bool verbose);
RcppExport SEXP largeVis_searchTreesTSparse(SEXP thresholdSEXP, SEXP n_treesSEXP, SEXP KSEXP, SEXP maxIterSEXP, SEXP iSEXP, SEXP jSEXP, SEXP xSEXP, SEXP distMethodSEXP, SEXP seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const int& >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_trees(n_treesSEXP);
    Rcpp::traits::input_parameter< const int& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type j(jSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type distMethod(distMethodSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable< Rcpp::NumericVector> >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(searchTreesTSparse(threshold, n_trees, K, maxIter, i, j, x, distMethod, seed, verbose));
    return __result;
END_RCPP
}
