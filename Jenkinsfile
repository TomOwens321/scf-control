
library identifier: 'sharedlibs@development', retriever: modernSCM(
    [$class: 'GitSCMSource',
     remote: 'git@github.com:TomOwens321/sharedlibs.git',
     credentialsId: 'me_at_github'])
// import com.towens.*

// @Library('sharedlibs')
// import com.towens.*

node('bbone') {
    stage('Checkout') {
        checkoutWithRetries(10)
    }

    stage('Test') {
        sayHello('TomO')
        sh 'build/ardverify.sh'
    }
}
